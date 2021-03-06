/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/HandView.h>

@class RenderedHandViewFactory, NSString;

@interface VectorHandView : UIView <HandView> {

	RenderedHandViewFactory* _factory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithPDFFile:(id)arg1 offset:(CGPoint)arg2 scale:(CGSize)arg3 bundle:(id)arg4 allowCaching:(BOOL)arg5 ;
@end

