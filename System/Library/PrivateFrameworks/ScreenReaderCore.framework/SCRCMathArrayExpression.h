/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

@interface SCRCMathArrayExpression : SCRCMathExpression {

	NSArray* _children;

}

@property (nonatomic,readonly) NSString * mathMLTag; 
@property (nonatomic,readonly) NSArray * mathMLAttributes; 
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)children;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(BOOL)hasSimpleArrayOfChildren;
-(id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(NSString *)mathMLTag;
-(id)prefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)suffixForChildAtIndex:(unsigned long long)arg1 ;
-(NSArray *)mathMLAttributes;
-(id)localizablePrefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)localizableSuffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)mathMLString;
@end

