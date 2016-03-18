/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMEventTrigger, NSObject, HMDelegateCaller, NSString;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge> {

	NSUUID* _uuid;
	HMEventTrigger* _eventTrigger;
	NSUUID* _uniqueIdentifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;

}

@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMEventTrigger * eventTrigger;                    //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                       //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)_configure:(id)arg1 eventTrigger:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 ;
-(HMDelegateCaller *)delegateCaller;
-(id)_serializeForAdd;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_setUuidAndUniqueId:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setEventTrigger:(HMEventTrigger *)arg1 ;
-(HMEventTrigger *)eventTrigger;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

