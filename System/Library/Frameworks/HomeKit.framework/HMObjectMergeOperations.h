/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject {

	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(void)_addOperation:(id)arg1 ;
-(void)_executeOperationsOnQueue:(id)arg1 ;
-(id)init;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)operations;
@end
