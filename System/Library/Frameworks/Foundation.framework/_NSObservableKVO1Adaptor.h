/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSObservableObservation.h>

@class NSObservableKeyPath;

@interface _NSObservableKVO1Adaptor : _NSObservableObservation {

	NSObservableKeyPath* kp;
	BOOL emitsChanges;

}
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3 ;
-(void)_setEmitsChanges:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)finishObserving;
-(void)remove;
@end
