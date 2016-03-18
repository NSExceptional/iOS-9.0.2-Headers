/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSDictionary, NSString;

@interface UIKit_PKSubsystem : NSObject <PKModularService> {

	BOOL _initialized;
	BOOL _plugInKitProcess;
	NSDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSDictionary * infoDictionary;                                  //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (assign,getter=isPlugInKitProcess,nonatomic) BOOL plugInKitProcess;              //@synthesize plugInKitProcess=_plugInKitProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initForPlugInKit;
+(id)sharedInstance;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
-(void)endUsing:(id)arg1 ;
-(NSDictionary *)infoDictionary;
-(BOOL)isPlugInKitProcess;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(void)setPlugInKitProcess:(BOOL)arg1 ;
@end
