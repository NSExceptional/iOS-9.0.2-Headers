/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYChangeTracking <NSObject>
@required
-(void)addObject:(id)arg1;
-(void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)addObject:(id)arg1 context:(id)arg2;
-(void)updateObject:(id)arg1 context:(id)arg2;
-(void)deleteObject:(id)arg1 context:(id)arg2;
-(void)addObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteObject:(id)arg1;
-(void)updateObject:(id)arg1;

@end

