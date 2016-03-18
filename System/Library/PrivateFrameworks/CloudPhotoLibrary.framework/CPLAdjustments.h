/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CPLResource;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying> {

	NSString* _adjustmentType;
	NSString* _adjustmentCompoundVersion;
	NSString* _adjustmentCreatorCode;
	unsigned long long _adjustmentSourceType;
	NSData* _simpleAdjustmentData;
	NSString* _similarToOriginalAdjustmentsFingerprint;
	NSString* _otherAdjustmentsFingerprint;
	CPLResource* _adjustmentData;
	NSString* _creatorCode;

}

@property (nonatomic,copy) NSString * adjustmentType;                                       //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCompoundVersion;                            //@synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCreatorCode;                                //@synthesize adjustmentCreatorCode=_adjustmentCreatorCode - In the implementation block
@property (assign,nonatomic) unsigned long long adjustmentSourceType;                       //@synthesize adjustmentSourceType=_adjustmentSourceType - In the implementation block
@property (nonatomic,retain) NSData * simpleAdjustmentData;                                 //@synthesize simpleAdjustmentData=_simpleAdjustmentData - In the implementation block
@property (nonatomic,copy) NSString * similarToOriginalAdjustmentsFingerprint;              //@synthesize similarToOriginalAdjustmentsFingerprint=_similarToOriginalAdjustmentsFingerprint - In the implementation block
@property (nonatomic,copy) NSString * otherAdjustmentsFingerprint;                          //@synthesize otherAdjustmentsFingerprint=_otherAdjustmentsFingerprint - In the implementation block
@property (nonatomic,retain) CPLResource * adjustmentData;                                  //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (nonatomic,copy) NSString * creatorCode;                                          //@synthesize creatorCode=_creatorCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPLResource *)adjustmentData;
-(void)setAdjustmentData:(CPLResource *)arg1 ;
-(NSString *)adjustmentType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)similarToOriginalAdjustmentsFingerprint;
-(void)setSimilarToOriginalAdjustmentsFingerprint:(NSString *)arg1 ;
-(NSString *)creatorCode;
-(void)setCreatorCode:(NSString *)arg1 ;
-(void)setAdjustmentType:(NSString *)arg1 ;
-(void)setAdjustmentCompoundVersion:(NSString *)arg1 ;
-(void)setAdjustmentSourceType:(unsigned long long)arg1 ;
-(void)setAdjustmentCreatorCode:(NSString *)arg1 ;
-(void)setSimpleAdjustmentData:(NSData *)arg1 ;
-(NSString *)otherAdjustmentsFingerprint;
-(void)setOtherAdjustmentsFingerprint:(NSString *)arg1 ;
-(id)adjustmentSimpleDescription;
-(NSData *)simpleAdjustmentData;
-(NSString *)adjustmentCompoundVersion;
-(NSString *)adjustmentCreatorCode;
-(unsigned long long)adjustmentSourceType;
@end

