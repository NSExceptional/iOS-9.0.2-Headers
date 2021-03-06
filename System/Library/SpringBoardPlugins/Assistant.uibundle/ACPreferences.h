/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFUIPreferencesDelegate.h>

@class AFUIPreferences, NSString;

@interface ACPreferences : NSObject <AFUIPreferencesDelegate> {

	AFUIPreferences* _internalPreferences;

}

@property (assign,nonatomic) BOOL siriDidActivate; 
@property (assign,nonatomic) BOOL tourGuideWasDisplayed; 
@property (assign,nonatomic) BOOL listenOnActivation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferences;
-(id)init;
-(BOOL)_boolForKey:(id)arg1 ;
-(void)preferences:(id)arg1 didChangeValueForKey:(id)arg2 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)listenOnActivation;
-(BOOL)siriDidActivate;
-(void)setSiriDidActivate:(BOOL)arg1 ;
-(void)setListenOnActivation:(BOOL)arg1 ;
-(BOOL)tourGuideWasDisplayed;
-(void)setTourGuideWasDisplayed:(BOOL)arg1 ;
@end

