/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutGoal, SAHLWorkoutType;

@interface SAHLStartWorkout : SADomainCommand

@property (assign,nonatomic) BOOL isOpenGoal; 
@property (assign,nonatomic) BOOL skipActivitySetup; 
@property (nonatomic,retain) SAHLWorkoutGoal * workoutGoal; 
@property (nonatomic,retain) SAHLWorkoutType * workoutType; 
+(id)startWorkout;
+(id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAHLWorkoutType *)workoutType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAHLWorkoutGoal *)workoutGoal;
-(BOOL)isOpenGoal;
-(void)setIsOpenGoal:(BOOL)arg1 ;
-(BOOL)skipActivitySetup;
-(void)setSkipActivitySetup:(BOOL)arg1 ;
-(void)setWorkoutGoal:(SAHLWorkoutGoal *)arg1 ;
-(void)setWorkoutType:(SAHLWorkoutType *)arg1 ;
@end
