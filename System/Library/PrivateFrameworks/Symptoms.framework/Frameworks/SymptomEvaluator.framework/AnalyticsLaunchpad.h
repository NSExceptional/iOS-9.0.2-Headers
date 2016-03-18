/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AWDAgent, NSMutableDictionary, NSString;

@interface AnalyticsLaunchpad : NSObject <ConfigurableObjectProtocol> {

	NSObject*<OS_dispatch_queue> launch_queue;
	NSObject*<OS_dispatch_queue> flows_queue;
	NSObject*<OS_dispatch_queue> nets_queue;
	NSObject*<OS_dispatch_queue> nois_queue;
	NSObject*<OS_dispatch_queue> service_queue;
	AWDAgent* awd;
	NSMutableDictionary* _launchParams;

}

@property (nonatomic,retain) NSMutableDictionary * launchParams;              //@synthesize launchParams=_launchParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(id)init;
-(int)configureInstance:(id)arg1 ;
-(NSMutableDictionary *)launchParams;
-(void)_launchSequence:(id)arg1 ;
-(void)setLaunchParams:(NSMutableDictionary *)arg1 ;
-(void)launchSequence;
@end

