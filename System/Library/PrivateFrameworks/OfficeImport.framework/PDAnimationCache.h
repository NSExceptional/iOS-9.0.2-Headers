/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDAnimationTarget, PDAnimateMotionBehavior, PDBuild, NSString;

@interface PDAnimationCache : NSObject {

	int mNodeType;
	int mPresetId;
	int mPresetSubType;
	int mPresetClass;
	PDAnimationTarget* mTarget;
	BOOL mHasDelay;
	double mDelay;
	BOOL mHasDuration;
	double mDuration;
	BOOL mHasDirection;
	double mDirection;
	BOOL mHasPartCount;
	int mPartCount;
	PDAnimateMotionBehavior* mMotionPath;
	BOOL mHasValue;
	double mValue;
	PDBuild* mBuild;
	int mIterateType;
	BOOL mIsHead;
	int mLevel;
	NSString* mGroupId;

}

@property (nonatomic,retain) PDAnimationTarget * target; 
@property (assign,nonatomic) int nodeType; 
@property (assign,nonatomic) int presetId; 
@property (assign,nonatomic) int presetSubType; 
@property (assign,nonatomic) int presetClass; 
@property (assign,nonatomic) int iterateType; 
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) double direction; 
@property (assign,nonatomic) BOOL hasPartCount; 
@property (assign,nonatomic) int partCount; 
@property (nonatomic,retain) PDAnimateMotionBehavior * motionPath; 
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value; 
@property (nonatomic,retain) NSString * groupId; 
@property (assign,nonatomic) BOOL isHead; 
@property (assign,nonatomic) int level; 
@property (nonatomic,retain) PDBuild * build; 
+(void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3 ;
+(void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3 ;
+(void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3 ;
+(id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned)arg2 ;
-(void)dealloc;
-(double)duration;
-(double)delay;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(PDAnimationTarget *)target;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(void)setDirection:(double)arg1 ;
-(double)direction;
-(int)nodeType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDirection;
-(PDBuild *)build;
-(int)presetClass;
-(BOOL)hasDelay;
-(void)setGroupId:(NSString *)arg1 ;
-(int)presetId;
-(int)presetSubType;
-(NSString *)groupId;
-(void)setPresetSubType:(int)arg1 ;
-(void)setPresetId:(int)arg1 ;
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
-(PDAnimateMotionBehavior *)motionPath;
-(void)setMotionPath:(PDAnimateMotionBehavior *)arg1 ;
-(void)setBuild:(PDBuild *)arg1 ;
-(BOOL)hasPartCount;
-(int)partCount;
-(void)setPartCount:(int)arg1 ;
-(BOOL)hasValue;
-(BOOL)isHead;
-(id)initWithAnimationInfo:(id)arg1 ;
-(void)setNodeType:(int)arg1 ;
-(void)setPresetClass:(int)arg1 ;
-(void)setHasDelay:(BOOL)arg1 ;
-(void)setHasDirection:(BOOL)arg1 ;
-(void)setHasPartCount:(BOOL)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(void)setIsHead:(BOOL)arg1 ;
@end

