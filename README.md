# medsizer-demo-ios

1. Copy folder `IMF-release` to your xcode project folder.
2. Click `Add files to project` in Xcode, select and add the whole folder `IMF-release`.
   You will see some new items added in `build phases`: `link binary` and `copy bundle resource`.
3. In Xcode, select `target->general->Embedded content`, change flag to `embed & sign`.
4. Add below privacy settings in `info.plist` of your app
    `Privacy- camera usage description`
    `Privacy- photo library usage description`
5. Refer to `ViewController.swift` in app folder, and learn about how to use `ImageMeasureViewController`.
