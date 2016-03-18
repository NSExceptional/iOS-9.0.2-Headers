/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKWidgetSceneKitViewProxyExports.h>

@class NSString, NSDictionary, SCNView, NSArray, NSMutableArray, OKWidgetCameraNode;

@interface OKWidgetSceneKitView : OKWidgetView <OKCollectionProxyDataSource, OKWidgetSceneKitViewProxyExports> {

	NSString* _c3dFile;
	BOOL _playing;
	NSDictionary* _options;
	SCNView* _sceneKitView;
	BOOL _scaleToFit;
	NSString* _didClickScript;
	NSArray* _childNodes;
	NSMutableArray* _widgetNodes;
	OKWidgetCameraNode* _cameraNode;

}

@property (nonatomic,retain,readonly) OKWidgetCameraNode * cameraNode;              //@synthesize cameraNode=_cameraNode - In the implementation block
@property (nonatomic,copy) NSString * c3dFile;                                      //@synthesize c3dFile=_c3dFile - In the implementation block
@property (assign,nonatomic) BOOL playing;                                          //@synthesize playing=_playing - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) SCNView * sceneKitView;                                  //@synthesize sceneKitView=_sceneKitView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(SCNView *)sceneKitView;
-(void)setSceneKitView:(SCNView *)arg1 ;
-(OKWidgetCameraNode *)cameraNode;
-(id)widgetNodeForName:(id)arg1 recursively:(BOOL)arg2 ;
-(void)prepareForRefresh;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(void)applySettings;
-(void)setC3dFile:(NSString *)arg1 ;
-(void)setupScene;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(NSString *)c3dFile;
-(void)loadSceneFromFile;
-(void)setSettingCamera:(id)arg1 ;
-(id)settingCamera;
-(id)settingDidClickScript;
-(void)setSettingDidClickScript:(id)arg1 ;
-(id)settingC3dFile;
-(void)setSettingC3dFile:(id)arg1 ;
-(BOOL)settingPlaying;
-(void)setSettingPlaying:(BOOL)arg1 ;
-(BOOL)settingLoops;
-(void)setSettingLoops:(BOOL)arg1 ;
-(id)settingOptions;
-(void)setSettingOptions:(id)arg1 ;
-(BOOL)settingScaleToFit;
-(void)setSettingScaleToFit:(BOOL)arg1 ;
-(id)settingChildNodes;
-(void)setSettingChildNodes:(id)arg1 ;
-(BOOL)settingJittering;
-(void)setSettingJittering:(BOOL)arg1 ;
-(BOOL)settingAutoenablesDefaultLighting;
-(void)setSettingAutoenablesDefaultLighting:(BOOL)arg1 ;
-(id)settingBackgroundColor;
-(void)setSettingBackgroundColor:(id)arg1 ;
-(BOOL)playing;
-(void)setPlaying:(BOOL)arg1 ;
@end

