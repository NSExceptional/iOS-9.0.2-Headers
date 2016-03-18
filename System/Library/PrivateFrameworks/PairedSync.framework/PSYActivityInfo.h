/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSNumber;

@interface PSYActivityInfo : NSObject <NSSecureCoding> {

	NSString* _label;
	NSString* _machServiceName;
	NSArray* _dependencies;
	NSString* _priority;
	NSNumber* _timeoutSeconds;
	NSString* _backboardPrelaunchBundleIdentifier;

}

@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                 //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,copy) NSArray * dependencies;                                     //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,copy) NSString * priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutSeconds;                                  //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,copy) NSString * backboardPrelaunchBundleIdentifier;              //@synthesize backboardPrelaunchBundleIdentifier=_backboardPrelaunchBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityWithPlist:(id)arg1 ;
-(NSArray *)dependencies;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setTimeoutSeconds:(NSNumber *)arg1 ;
-(void)setBackboardPrelaunchBundleIdentifier:(NSString *)arg1 ;
-(NSString *)backboardPrelaunchBundleIdentifier;
-(NSNumber *)timeoutSeconds;
-(NSString *)machServiceName;
-(void)setDependencies:(NSArray *)arg1 ;
@end

