/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {

	double _doublePredicateValue;
	long long _integerPredicateValue;
	NSData* _bytesPredicateValue;
	float _floatPredicateValue;
	NSString* _stringPredicateValue;
	int _type;
	BOOL _boolPredicateValue;
	SCD_Struct_MP20 _has;

}

@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerPredicateValue; 
@property (assign,nonatomic) long long integerPredicateValue;              //@synthesize integerPredicateValue=_integerPredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoublePredicateValue; 
@property (assign,nonatomic) double doublePredicateValue;                  //@synthesize doublePredicateValue=_doublePredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasFloatPredicateValue; 
@property (assign,nonatomic) float floatPredicateValue;                    //@synthesize floatPredicateValue=_floatPredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolPredicateValue; 
@property (assign,nonatomic) BOOL boolPredicateValue;                      //@synthesize boolPredicateValue=_boolPredicateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringPredicateValue; 
@property (nonatomic,retain) NSString * stringPredicateValue;              //@synthesize stringPredicateValue=_stringPredicateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesPredicateValue; 
@property (nonatomic,retain) NSData * bytesPredicateValue;                 //@synthesize bytesPredicateValue=_bytesPredicateValue - In the implementation block
-(long long)integerPredicateValue;
-(double)doublePredicateValue;
-(float)floatPredicateValue;
-(BOOL)boolPredicateValue;
-(NSString *)stringPredicateValue;
-(NSData *)bytesPredicateValue;
-(void)setIntegerPredicateValue:(long long)arg1 ;
-(void)setFloatPredicateValue:(float)arg1 ;
-(void)setDoublePredicateValue:(double)arg1 ;
-(void)setStringPredicateValue:(NSString *)arg1 ;
-(void)setBytesPredicateValue:(NSData *)arg1 ;
-(BOOL)hasIntegerPredicateValue;
-(BOOL)hasDoublePredicateValue;
-(BOOL)hasFloatPredicateValue;
-(BOOL)hasBoolPredicateValue;
-(void)setBoolPredicateValue:(BOOL)arg1 ;
-(BOOL)hasStringPredicateValue;
-(BOOL)hasBytesPredicateValue;
-(void)setHasIntegerPredicateValue:(BOOL)arg1 ;
-(void)setHasDoublePredicateValue:(BOOL)arg1 ;
-(void)setHasFloatPredicateValue:(BOOL)arg1 ;
-(void)setHasBoolPredicateValue:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

