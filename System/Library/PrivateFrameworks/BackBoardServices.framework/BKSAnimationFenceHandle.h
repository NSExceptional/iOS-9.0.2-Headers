/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying> {

	BSMachPortSendRight* _caFence;
	BSMachPortSendRight* _preFence;
	BSMachPortSendRight* _preFenceTrigger;
	BOOL _notObservable;
	BOOL _reportable;
	int _invalidated;

}

@property (getter=isUsable,nonatomic,readonly) BOOL usable; 
@property (nonatomic,retain,readonly) BSMachPortSendRight * preFenceTrigger;              //@synthesize preFenceTrigger=_preFenceTrigger - In the implementation block
@property (nonatomic,retain,readonly) BSMachPortSendRight * _caFence;                     //@synthesize caFence=_caFence - In the implementation block
@property (getter=_isReportable,nonatomic,readonly) BOOL _reportable;                     //@synthesize reportable=_reportable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newHandleWithCAPort:(unsigned)arg1 ;
+(id)_xpcClient;
+(id)newSystemFenceHandle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)CAPort;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BSMachPortSendRight *)_caFence;
-(BOOL)_isReportable;
-(id)_initWithCAFence:(id)arg1 preFence:(id)arg2 preFenceTrigger:(id)arg3 reportable:(BOOL)arg4 notObservable:(BOOL)arg5 ;
-(BOOL)isUsable;
-(BSMachPortSendRight *)preFenceTrigger;
@end

