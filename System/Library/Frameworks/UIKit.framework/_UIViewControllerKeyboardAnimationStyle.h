/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewAnimationStyleDirectional.h>

@class _UIViewControllerTransitionContext, _UIViewControllerKeyboardAnimationStyleInfo;

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional {

	BOOL _disableAlongsideView;
	BOOL _allowCustomTransition;
	_UIViewControllerTransitionContext* _context;
	_UIViewControllerKeyboardAnimationStyleInfo* _info;

}

@property (nonatomic,readonly) _UIViewControllerTransitionContext * context;                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL disableAlongsideView;                                         //@synthesize disableAlongsideView=_disableAlongsideView - In the implementation block
@property (nonatomic,readonly) _UIViewControllerKeyboardAnimationStyleInfo * info;              //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) BOOL allowCustomTransition;                                        //@synthesize allowCustomTransition=_allowCustomTransition - In the implementation block
+(id)animationStyleWithContext:(id)arg1 useCustomTransition:(BOOL)arg2 ;
+(id)animationStyleWithContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIViewControllerTransitionContext *)context;
-(void)setDisableAlongsideView:(BOOL)arg1 ;
-(_UIViewControllerKeyboardAnimationStyleInfo *)info;
-(id)initWithContext:(id)arg1 ;
-(void)setAllowCustomTransition:(BOOL)arg1 ;
-(BOOL)disableAlongsideView;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(BOOL)allowCustomTransition;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(BOOL)isAnimationCompleted;
-(BOOL)canDismissWithScrollView;
@end

