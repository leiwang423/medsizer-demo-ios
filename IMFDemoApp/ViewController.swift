//
//  ViewController.swift
//  hello
//
//  Created by 王磊 on 2020/4/5.
//  Copyright © 2020 王磊. All rights reserved.
//

import UIKit
import ImageMeasureFramework

class ViewController: SideMenuTransitionAnimatorViewController {

  public var navigator: UINavigationController!
  
  var imageMeasureViewController : ImageMeasureViewController?
    var demoViewController: DemoViewController!
  override func viewDidLoad() {
    print("ViewController viewDidLoad")
    super.viewDidLoad()
  }
  override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
    print("view controller prepare segue: ", segue.identifier)
    switch (segue.identifier, segue.destination) {
    case (.some("embedNavigator"), let navigator as UINavigationController):
      self.navigator = navigator
      self.navigator.delegate = self
      createImageMeasureViewController()
      createDemoViewController()
      self.navigator.setViewControllers([self.demoViewController, self.imageMeasureViewController!], animated: true)
      break
    default:
      super.prepare(for: segue, sender: sender)
    }
  }
  @IBAction func btnSideMenu(_ sender: UIButton) {
    self.imageMeasureViewController!.showSideMenu(self)
  }
  

    private func createDemoViewController() {
        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        self.demoViewController = storyboard.instantiateViewController(withIdentifier: "DemoViewController") as! DemoViewController
        self.demoViewController!.navigator = self.navigator
        self.demoViewController.imageMeasureViewController = self.imageMeasureViewController
    }
  private func createImageMeasureViewController() -> ImageMeasureViewController {
    print("createImageMeasureViewController")
    ImageMeasureViewController.reloadTemplates([])
    let storyboard = UIStoryboard(name: "measure", bundle: MeasureUtils.getBundle(bundleName:  "ImageMeasureResourceBundle"))
    self.imageMeasureViewController = storyboard.instantiateViewController(withIdentifier: "ImageMeasureViewController") as! ImageMeasureViewController
    self.imageMeasureViewController!.modalPresentationStyle = .popover
    self.imageMeasureViewController!.modalTransitionStyle = .crossDissolve
    self.imageMeasureViewController!.navigator = self.navigator
    self.imageMeasureViewController!.delegate = self
    return self.imageMeasureViewController!
  }
}

extension ViewController : ImageMeasureProtocol {
    func getMeasurementItem(surgeryType: String) -> [MeasurementItemInfo] {
        return []
    }
    
    // received measurement data list from IMF
    func saveMeasureMentData(rawPictureID: String, pictureID: String, data: [MeasurementDataStruct], comment: String) {
        print("ImageMeasureProtocol::saveMeasureMentData")
    }
    
    func saveMatchedTemplates(pictureID: String, templates: [TemplateMatchInfo]) {
        print("ImageMeasureProtocol::saveMatchedTemplates")
    }
    
  // provide patient info to IMF
  func getPatientInfo() -> PatientInfo {
    print("ImageMeasureProtocol::getPatientInfo")
    // by default, generate and return an empty PatientInfo object.
    return self.imageMeasureViewController!.generatePatientInfo()
  }
  // provide template list to IMF
  func getTemplateIndex() -> [Template] {
    print("ImageMeasureProtocol::getTemplateIndex")
    return []
  }
}
