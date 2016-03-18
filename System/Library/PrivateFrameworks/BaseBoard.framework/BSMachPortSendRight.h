/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortRight.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
+(id)taskNamePortForPID:(int)arg1 ;
+(id)bootstrapLookUpPortWithName:(id)arg1 ;
+(id)wrapSendRight:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_rightDescription;
+(void)_queue_destroyPort:(unsigned)arg1 ;
+(id)taskNameForPID:(int)arg1 ;
+(id)bootstrapLookUpWithName:(id)arg1 ;
-(id)initWithSendRight:(unsigned)arg1 assumeOwnership:(BOOL)arg2 ;
-(id)initWithSendRight:(unsigned)arg1 ;
-(unsigned)sendRight;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithPort:(unsigned)arg1 ;
-(BOOL)_queue_isUsable;
-(id)_initWithPort:(unsigned)arg1 previousTrace:(id)arg2 ;
-(id)_initWithCopyOfPort:(unsigned)arg1 previousTrace:(id)arg2 ;
-(BOOL)_shouldInvalidateOnEncode;
-(id)initWithCopyOfRight:(id)arg1 ;
-(id)initWithCopyOfPort:(unsigned)arg1 ;
-(id)initFromReceiveRight:(id)arg1 ;
-(id)initWithNonRetainingPort:(unsigned)arg1 ;
@end

