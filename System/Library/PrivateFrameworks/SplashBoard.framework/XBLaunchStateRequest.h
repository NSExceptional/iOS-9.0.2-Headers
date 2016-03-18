/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplay, NSString;

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying> {

	BOOL _isMainScene;
	FBSDisplay* _display;
	NSString* _sceneID;
	long long _interfaceOrientation;
	unsigned long long _statusBarState;
	NSString* _urlSchemeName;
	NSString* _launchInterfaceIdentifier;
	CGSize _referenceSize;
	CGSize _naturalSize;

}

@property (nonatomic,retain) FBSDisplay * display;                            //@synthesize display=_display - In the implementation block
@property (nonatomic,copy) NSString * sceneID;                                //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) BOOL isMainScene;                                //@synthesize isMainScene=_isMainScene - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                            //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                              //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                  //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarState;               //@synthesize statusBarState=_statusBarState - In the implementation block
@property (nonatomic,copy) NSString * urlSchemeName;                          //@synthesize urlSchemeName=_urlSchemeName - In the implementation block
@property (nonatomic,copy) NSString * launchInterfaceIdentifier;              //@synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(FBSDisplay *)display;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(CGSize)naturalSize;
-(void)setSceneID:(NSString *)arg1 ;
-(NSString *)sceneID;
-(void)setDisplay:(FBSDisplay *)arg1 ;
-(BOOL)isMainScene;
-(CGSize)referenceSize;
-(unsigned long long)statusBarState;
-(NSString *)urlSchemeName;
-(NSString *)launchInterfaceIdentifier;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)setIsMainScene:(BOOL)arg1 ;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(void)setUrlSchemeName:(NSString *)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
@end

