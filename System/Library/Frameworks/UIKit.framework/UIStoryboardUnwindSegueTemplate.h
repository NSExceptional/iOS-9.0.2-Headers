/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSString;

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate {

	NSString* _action;

}

@property (nonatomic,copy) NSString * action;              //@synthesize action=_action - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_perform:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)_legacyUnwindExecutorForTarget:(id)arg1 ;
@end

