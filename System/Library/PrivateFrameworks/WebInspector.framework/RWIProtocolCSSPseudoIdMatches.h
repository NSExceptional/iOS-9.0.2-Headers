/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (assign,nonatomic) int pseudoId; 
@property (nonatomic,copy) NSArray * matches; 
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(void)setPseudoId:(int)arg1 ;
-(id)initWithPseudoId:(int)arg1 matches:(id)arg2 ;
-(int)pseudoId;
@end

