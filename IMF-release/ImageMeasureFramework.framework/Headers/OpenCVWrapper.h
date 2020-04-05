//
//  OpenCVWrapper.h
//  
//
//  Created by 王磊 on 2020/1/26.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenCVWrapper : NSObject

+ (NSString *)openCVVersionString;
+ (UIImage *)findContourWithOpenCV:(UIImage*)inputImage :(int)width :(int)height :(float)centerX :(float)centerY :(int)lowThreshold :(int)highThreshold :(double)searchRadius :(int*)detectedCenterX :(int*)detectedCenterY :(double*)detectedRadius :(bool)debug;
+ (UIImage*) findConnectedComponentsWithOpenCV: (UIImage*) inputImage :(float)centerX :(float)centerY :(double)radius :(double)threshold :(double)minArea :(int)mode :(double*)maxDistance;
//+ (UIImage*) processWithOpenCVImage1:(UIImage*)inputImage1 image2:(UIImage*)inputImage2;
//+ (UIImage*) processWithArray:(NSArray<UIImage*>*)imageArray;
+ (bool)isConvexWithOpenCV :(const CGPoint[_Nonnull]) points :(int)count;
+ (bool)isIntersectedWithOpenCV:(const CGPoint[_Nonnull]) pointArray1 :(int)count1 :(const CGPoint[_Nonnull]) pointArray2 :(int)count2;
+ (UIImage *)changePixelValueWithOpenCV:(UIImage*)inputImage :(int)red :(int)green :(int)blue :(int) alpha;
@end

NS_ASSUME_NONNULL_END
