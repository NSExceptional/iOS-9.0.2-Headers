/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEPolicyResult, NSArray;

@interface NEPolicy : NSObject <NEPrettyDescription> {

	unsigned _order;
	NEPolicyResult* _result;
	NSArray* _conditions;

}

@property (assign) unsigned order;                       //@synthesize order=_order - In the implementation block
@property (retain) NEPolicyResult * result;              //@synthesize result=_result - In the implementation block
@property (copy) NSArray * conditions;                   //@synthesize conditions=_conditions - In the implementation block
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithOrder:(unsigned)arg1 result:(id)arg2 conditions:(id)arg3 ;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setOrder:(unsigned)arg1 ;
-(unsigned)order;
-(BOOL)validate;
-(NEPolicyResult *)result;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(void)setResult:(NEPolicyResult *)arg1 ;
@end

