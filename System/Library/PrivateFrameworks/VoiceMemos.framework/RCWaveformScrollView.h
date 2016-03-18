/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIScrollView.h>

@interface RCWaveformScrollView : UIScrollView {

	unsigned long long _ignoreContentOffsetChangesCount;

}
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetInPresentationLayer:(BOOL)arg1 ;
-(void)beginIgnoringContentOffsetChanges;
-(void)endIgnoringContentOffsetChanges;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 usingCurrentAnimatedPosition:(BOOL)arg3 ;
@end

