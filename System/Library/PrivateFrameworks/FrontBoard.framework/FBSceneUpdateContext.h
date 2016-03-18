/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSSceneSettingsDiff;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {

	NSString* _sceneID;
	unsigned long long _transactionID;
	FBSSceneSettingsDiff* _settingsDiff;

}

@property (nonatomic,copy) NSString * sceneID;                                 //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) unsigned long long transactionID;                 //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;              //@synthesize settingsDiff=_settingsDiff - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithSceneID:(id)arg1 transactionID:(unsigned long long)arg2 settingsDiff:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSceneID:(NSString *)arg1 ;
-(void)setTransactionID:(unsigned long long)arg1 ;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(NSString *)sceneID;
-(unsigned long long)transactionID;
-(FBSSceneSettingsDiff *)settingsDiff;
@end
