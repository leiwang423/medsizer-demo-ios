// Generated by Apple Swift version 5.1.3 effective-4.2 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import PopMenu;
@import QuartzCore;
@import SideMenu;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ImageMeasureFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif







@class NSCoder;
@class UIEvent;
@class UIScrollView;
@class UIGestureRecognizer;

SWIFT_CLASS("_TtC21ImageMeasureFramework8CropView")
@interface CropView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (void)layoutSubviews;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework18CropViewController")
@interface CropViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework36DDPerspectiveTransformViewController")
@interface DDPerspectiveTransformViewController : UIViewController
/// MARK: - Life Cicle
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework22DataSyncViewController")
@interface DataSyncViewController : UIViewController
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;
@class UIStoryboardSegue;

SWIFT_CLASS("_TtC21ImageMeasureFramework35HomeScreenPatientInfoViewController")
@interface HomeScreenPatientInfoViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class MeasurementDataStruct;
@class PatientInfo;
@class TemplateMatchInfo;

SWIFT_PROTOCOL("_TtP21ImageMeasureFramework20ImageMeasureProtocol_")
@protocol ImageMeasureProtocol
- (void)saveMeasureMentDataWithRawPictureID:(NSString * _Nonnull)rawPictureID pictureID:(NSString * _Nonnull)pictureID data:(NSArray<MeasurementDataStruct *> * _Nonnull)data;
- (PatientInfo * _Nonnull)getPatientInfo SWIFT_WARN_UNUSED_RESULT;
- (void)saveMatchedTemplatesWithPictureID:(NSString * _Nonnull)pictureID templates:(NSArray<TemplateMatchInfo *> * _Nonnull)templates;
@end


@interface HomeScreenPatientInfoViewController (SWIFT_EXTENSION(ImageMeasureFramework)) <ImageMeasureProtocol>
- (void)saveMatchedTemplatesWithPictureID:(NSString * _Nonnull)pictureID templates:(NSArray<TemplateMatchInfo *> * _Nonnull)templates;
- (void)saveMeasureMentDataWithRawPictureID:(NSString * _Nonnull)rawPictureID pictureID:(NSString * _Nonnull)pictureID data:(NSArray<MeasurementDataStruct *> * _Nonnull)data;
- (PatientInfo * _Nonnull)getPatientInfo SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework32HomeScreenTemplateViewController")
@interface HomeScreenTemplateViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@class UINavigationController;
@class Template;

SWIFT_CLASS("_TtC21ImageMeasureFramework26ImageMeasureViewController")
@interface ImageMeasureViewController : UIViewController
@property (nonatomic, weak) id <ImageMeasureProtocol> _Nullable delegate;
@property (nonatomic, strong) UINavigationController * _Null_unspecified navigator;
@property (nonatomic, strong) PatientInfo * _Nullable patientInfo;
@property (nonatomic, strong) DataSyncViewController * _Nullable dataSyncViewController;
+ (void)reloadTemplates:(NSArray<Template *> * _Nonnull)templates;
- (void)viewDidLoad;
- (void)initDataSyncPanel SWIFT_METHOD_FAMILY(none);
- (PatientInfo * _Nonnull)generatePatientInfo SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end




@interface ImageMeasureViewController (SWIFT_EXTENSION(ImageMeasureFramework)) <UIScrollViewDelegate>
@end

@protocol UIViewControllerAnimatedTransitioning;

@interface ImageMeasureViewController (SWIFT_EXTENSION(ImageMeasureFramework)) <UINavigationControllerDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)navigationController:(UINavigationController * _Nonnull)navigationController animationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController * _Nonnull)fromVC toViewController:(UIViewController * _Nonnull)toVC SWIFT_WARN_UNUSED_RESULT;
@end






@interface ImageMeasureViewController (SWIFT_EXTENSION(ImageMeasureFramework)) <UIViewControllerTransitioningDelegate>
@end







@class UIPickerView;
@class UITouch;

SWIFT_CLASS("_TtC21ImageMeasureFramework33InsertPatientRecordViewController")
@interface InsertPatientRecordViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)pickerView:(UIPickerView * _Nonnull)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView * _Nullable)view SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework21MeasurementDataStruct")
@interface MeasurementDataStruct : NSObject
/// 测量数据ID
@property (nonatomic) NSInteger id;
/// 测量项名称
@property (nonatomic, copy) NSString * _Nonnull title;
/// 测量值
@property (nonatomic, copy) NSString * _Nonnull value;
/// 测量值单位
@property (nonatomic, copy) NSString * _Nonnull unit;
/// 测量工具类别
@property (nonatomic) NSInteger rulerType;
/// 测量路径关键点列表
@property (nonatomic, copy) NSArray<NSValue *> * _Nonnull vertics;
/// 测量位置中心点
@property (nonatomic) CGPoint center;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework12ModelManager")
@interface ModelManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework11PatientInfo")
@interface PatientInfo : NSObject
/// 流水号
@property (nonatomic, copy) NSString * _Nonnull RollNo;
/// 姓名
@property (nonatomic, copy) NSString * _Nonnull Name;
/// 年龄
@property (nonatomic, copy) NSString * _Nonnull Age;
/// 性别
@property (nonatomic, copy) NSString * _Nonnull Gender;
/// 诊断时间
@property (nonatomic, copy) NSString * _Nonnull Time;
/// 手术类别或治疗类型
@property (nonatomic, copy) NSString * _Nonnull PatientType;
/// 原始影像ID
@property (nonatomic, copy) NSString * _Nonnull RawPictureID;
/// 实测影像ID
@property (nonatomic, copy) NSString * _Nonnull PictureID;
/// 匹配模版ID列表
@property (nonatomic, copy) NSString * _Nonnull MatchedTemplates;
/// 测量数据
@property (nonatomic, copy) NSString * _Nonnull MeasurementData;
/// 诊断备注
@property (nonatomic, copy) NSString * _Nonnull Remark;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework16RulerManagerView")
@interface RulerManagerView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end






@interface RulerManagerView (SWIFT_EXTENSION(ImageMeasureFramework))
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end






@interface RulerManagerView (SWIFT_EXTENSION(ImageMeasureFramework)) <PopMenuViewControllerDelegate>
@end

@class UITapGestureRecognizer;
@class UIPanGestureRecognizer;

SWIFT_CLASS("_TtC21ImageMeasureFramework5Shape")
@interface Shape : UIView
@property (nonatomic) CGPoint center;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
/// Scale Effect
- (void)tapGestureWithGr:(UITapGestureRecognizer * _Nonnull)gr;
- (void)controlPointPanActionWithGr:(UIPanGestureRecognizer * _Nonnull)gr;
- (void)drawRect:(CGRect)rect;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end




SWIFT_CLASS("_TtC21ImageMeasureFramework40SideMenuCircularRevealTransitionAnimator")
@interface SideMenuCircularRevealTransitionAnimator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol UIViewControllerContextTransitioning;

@interface SideMenuCircularRevealTransitionAnimator (SWIFT_EXTENSION(ImageMeasureFramework)) <UIViewControllerAnimatedTransitioning>
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)context;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework29SideMenuContentViewController")
@interface SideMenuContentViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework40SideMenuTransitionAnimatorViewController")
@interface SideMenuTransitionAnimatorViewController : UIViewController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)navigationController:(UINavigationController * _Nonnull)navigationController animationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController * _Nonnull)fromVC toViewController:(UIViewController * _Nonnull)toVC SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)_ sourceController:(UIViewController * _Nonnull)_ SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework22SideMenuViewController")
@interface SideMenuViewController : UITableViewController
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end




@interface SideMenuViewController (SWIFT_EXTENSION(ImageMeasureFramework))
- (NSIndexPath * _Nullable)tableView:(UITableView * _Nonnull)tableView willSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface SideMenuViewController (SWIFT_EXTENSION(ImageMeasureFramework)) <Menu>
@property (nonatomic, readonly, copy) NSArray<UIView *> * _Nonnull menuItems;
@end

@class UIColor;
@class UIImage;

SWIFT_CLASS("_TtC21ImageMeasureFramework10SwiftyMenu")
@interface SwiftyMenu : UIView
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) BOOL hideOptionsWhenSelect;
@property (nonatomic) BOOL scrollingEnabled;
@property (nonatomic) double rowHeight;
@property (nonatomic, strong) UIColor * _Nonnull menuHeaderBackgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull rowBackgroundColor;
@property (nonatomic, strong) UIColor * _Nullable selectedRowColor;
@property (nonatomic, strong) UIColor * _Nonnull optionColor;
@property (nonatomic, strong) UIColor * _Nonnull placeHolderColor;
@property (nonatomic, copy) NSString * _Nullable placeHolderText;
@property (nonatomic, strong) UIImage * _Nullable arrow;
@property (nonatomic) NSInteger titleLeftInset;
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
@property (nonatomic) NSInteger listHeight;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) double expandingDuration;
@property (nonatomic) double collapsingDuration;
@property (nonatomic) double expandingDelay;
@property (nonatomic) double collapsingDelay;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end




@interface SwiftyMenu (SWIFT_EXTENSION(ImageMeasureFramework)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@interface SwiftyMenu (SWIFT_EXTENSION(ImageMeasureFramework)) <UITableViewDelegate>
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end




SWIFT_CLASS("_TtC21ImageMeasureFramework8Template")
@interface Template : NSObject
/// 流水号/编号
@property (nonatomic, copy) NSString * _Nonnull ID;
/// 生产厂商/ 供应商
@property (nonatomic, copy) NSString * _Nonnull Manufacturer;
/// 尺寸/型号
@property (nonatomic, copy) NSString * _Nonnull Size;
/// 放大率
@property (nonatomic) float ScaleRatio;
/// 图片ID/模版文件路径
@property (nonatomic, copy) NSString * _Nonnull ImageID;
/// 适用手术类型
@property (nonatomic, copy) NSString * _Nonnull SurgeryType;
/// 品牌
@property (nonatomic, copy) NSString * _Nonnull Brand;
/// 产品子类
@property (nonatomic, copy) NSString * _Nonnull ProductType;
/// 适用身体部位
@property (nonatomic, copy) NSString * _Nonnull Component;
/// 放置朝向，方位
@property (nonatomic, copy) NSString * _Nonnull Location;
/// 显示名称
@property (nonatomic, copy) NSString * _Nonnull DisplayName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework12TemplateDBv2")
@interface TemplateDBv2 : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21ImageMeasureFramework17TemplateMatchInfo")
@interface TemplateMatchInfo : NSObject
/// Template ID
@property (nonatomic, copy) NSString * _Nonnull id;
/// 匹配位置中心点
@property (nonatomic) CGPoint center;
/// 被测图片放大比率
@property (nonatomic) CGFloat mainPixelsPerMm;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id center:(CGPoint)center mainPixelsPerMm:(CGFloat)mainPixelsPerMm OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end






























SWIFT_CLASS("_TtC21ImageMeasureFramework4Util")
@interface Util : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
