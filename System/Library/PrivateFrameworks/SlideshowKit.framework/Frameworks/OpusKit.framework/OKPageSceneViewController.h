/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPageViewController.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKPageSceneViewControllerExport.h>

@class NSMutableArray, SCNNode, NSArray, NSString;

@interface OKPageSceneViewController : OKPageViewController <OKCollectionProxyDataSource, OKPageSceneViewControllerExport> {

	NSMutableArray* _pageViewZones;
	CGSize _screenSize;
	NSMutableArray* _widgetNodes;
	SCNNode* _cameraForDisplay;
	SCNNode* _cameraForWarmup;
	SCNVector3 _lastPosition;
	BOOL _needsCameraPositionAdjustment;
	BOOL _needsPositionAdjustment;
	SCNNode* _rootNode;
	SCNVector3 _cameraPosition;

}

@property (nonatomic,retain,readonly) NSArray * widgetNodes;                  //@synthesize widgetNodes=_widgetNodes - In the implementation block
@property (nonatomic,retain,readonly) SCNNode * rootNode;                     //@synthesize rootNode=_rootNode - In the implementation block
@property (assign,nonatomic) SCNVector3 cameraPosition;                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign,nonatomic) BOOL needsCameraPositionAdjustment;              //@synthesize needsCameraPositionAdjustment=_needsCameraPositionAdjustment - In the implementation block
@property (assign,nonatomic) BOOL needsPositionAdjustment;                    //@synthesize needsPositionAdjustment=_needsPositionAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)commonInit;
-(BOOL)prepareForDisplay;
-(SCNNode *)rootNode;
-(id)settingObjectForKey:(id)arg1 ;
-(void)applyLayoutSettings;
-(void)resolutionDidChange;
-(void)layoutDidChange;
-(id)navigatorSceneKitViewController;
-(id)widgetNodeForName:(id)arg1 recursively:(BOOL)arg2 ;
-(void)updateMotion;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)prepareForReload;
-(void)prepareForRefresh;
-(SCNVector3)cameraPositionForNode:(id)arg1 ;
-(void)initCameraForFrustumWithPosition:(SCNVector3)arg1 andRotation:(SCNVector4)arg2 ;
-(void)reloadWidgetNodeInFrontOfCamera;
-(id)visibleWidgets;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)widgetNodeWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 ;
-(void)updateLayoutSteps;
-(void)applySettings;
-(id)widgetNodeInRect:(CGRect)arg1 ;
-(id)currentRemoteWidgets;
-(SCNVector3)settingCameraPosition;
-(void)setSettingCameraPosition:(SCNVector3)arg1 ;
-(SCNVector3)settingPosition;
-(void)setSettingPosition:(SCNVector3)arg1 ;
-(SCNVector4)settingRotation;
-(void)setSettingRotation:(SCNVector4)arg1 ;
-(void)prepareAllWidgets;
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3 ;
-(void)removeWidgetNode:(id)arg1 ;
-(void)prepareWidgetsForCameraPosition:(SCNVector3)arg1 rotation:(SCNVector4)arg2 ;
-(NSArray *)widgetNodes;
-(SCNVector3)cameraPosition;
-(void)setCameraPosition:(SCNVector3)arg1 ;
-(BOOL)needsCameraPositionAdjustment;
-(void)setNeedsCameraPositionAdjustment:(BOOL)arg1 ;
-(BOOL)needsPositionAdjustment;
-(void)setNeedsPositionAdjustment:(BOOL)arg1 ;
@end

