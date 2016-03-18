/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	NSString* _property;
	id _value;
	long long _comparisonType;

}

@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) id value; 
@property (assign,nonatomic) long long comparisonType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3 ;
+(id)predicateWithValue:(id)arg1 forProperty:(id)arg2 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForML3EntityProperty:(id)arg1 ;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObject;
-(id)descriptionOfValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setProperty:(NSString *)arg1 ;
-(void)setComparisonType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(long long)comparisonType;
-(NSString *)property;
@end

