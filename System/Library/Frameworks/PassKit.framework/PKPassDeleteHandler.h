/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassDeleteHandler <NSObject>
@optional
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2;
-(BOOL)isDeletionInProgressForPass:(id)arg1;

@required
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;

@end

