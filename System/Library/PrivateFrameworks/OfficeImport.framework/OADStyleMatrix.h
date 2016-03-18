/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface OADStyleMatrix : NSObject {

	NSString* mName;
	NSMutableArray* mFills;
	NSMutableArray* mStrokes;
	NSMutableArray* mEffects;
	NSMutableArray* mBgFills;

}

@property (nonatomic,copy) NSString * name; 
+(id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isEmpty;
-(id)bgFillAtIndex:(unsigned long long)arg1 ;
-(void)addFill:(id)arg1 ;
-(void)addStroke:(id)arg1 ;
-(void)addEffects:(id)arg1 ;
-(void)addBgFill:(id)arg1 ;
-(id)strokeAtIndex:(unsigned long long)arg1 ;
-(id)fillAtIndex:(unsigned long long)arg1 ;
-(id)effectsAtIndex:(unsigned long long)arg1 ;
-(void)validateStyleMatrix;
-(void)padArray:(id)arg1 withContentsOfArray:(id)arg2 ;
-(unsigned long long)fillCount;
-(id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)strokeCount;
-(id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)effectsCount;
-(id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)bgFillCount;
@end

