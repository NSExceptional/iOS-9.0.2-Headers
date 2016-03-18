/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IMDirectlyObservableObject : NSObject {

	NSArray* _observers;

}

@property (retain) NSArray * observers;              //@synthesize observers=_observers - In the implementation block
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
-(void)informObserversOfNotification:(id)arg1 ;
-(void)_objectDidPostNotification:(id)arg1 ;
@end

