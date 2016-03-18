/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (assign,nonatomic) int startOffset; 
@property (assign,nonatomic) int endOffset; 
@property (assign,nonatomic) BOOL hasExecuted; 
-(int)endOffset;
-(int)startOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)setEndOffset:(int)arg1 ;
-(void)setHasExecuted:(BOOL)arg1 ;
-(id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(BOOL)arg3 ;
-(BOOL)hasExecuted;
@end

