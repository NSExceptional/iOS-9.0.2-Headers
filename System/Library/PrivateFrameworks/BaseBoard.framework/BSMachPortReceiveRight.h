/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSMachPortRight.h>

@interface BSMachPortReceiveRight : BSMachPortRight
+(BOOL)supportsSecureCoding;
+(id)_rightDescription;
+(void)_queue_destroyPort:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithPort:(unsigned)arg1 ;
-(BOOL)_queue_isUsable;
-(id)_initWithPort:(unsigned)arg1 previousTrace:(id)arg2 ;
@end

