/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPContainerObserver <NSObject>
@optional
-(id)observationQueueForContainer:(id)arg1;

@required
-(void)container:(id)arg1 didEditByReplacingObjectsWithReplacements:(id)arg2 context:(id)arg3;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;

@end

