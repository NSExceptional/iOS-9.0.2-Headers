/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface SGTuple2 : NSObject <NSCopying> {

	NSObject* _first;
	NSObject* _second;

}

@property (nonatomic,readonly) NSObject * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSObject * second;              //@synthesize second=_second - In the implementation block
+(id)tupleWithFirst:(id)arg1 second:(id)arg2 ;
-(NSObject *)first;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)second;
-(BOOL)isEqualToTuple2:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end
