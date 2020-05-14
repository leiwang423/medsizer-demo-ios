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
      self.navigator.setViewControllers([self.imageMeasureViewController!], animated: true)
      break
    default:
      super.prepare(for: segue, sender: sender)
    }
  }
  @IBAction func btnSideMenu(_ sender: UIButton) {
    self.imageMeasureViewController!.showSideMenu(self)
  }
  

  private func createImageMeasureViewController() -> ImageMeasureViewController {
    print("createImageMeasureViewController")
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
  func saveMeasureMentData(data: MeasurementDataList) {
    print("ImageMeasureProtocol::saveMeasureMentData")
  }
  func getPatientInfo() -> PatientInfo {
    print("ImageMeasureProtocol::getPatientInfo")
    return self.imageMeasureViewController!.generatePatientInfo()
  }
  func getTemplateIndex() -> [Template] {
    print("ImageMeasureProtocol::getTemplateIndex")
    return []
  }
}
