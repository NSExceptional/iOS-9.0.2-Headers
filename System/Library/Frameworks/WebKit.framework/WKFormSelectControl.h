/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormPeripheral.h>

@interface WKFormSelectControl : NSObject <WKFormPeripheral> {

	RetainPtr<id<WKFormControl> >* _control;

}
+(id)createPeripheralWithView:(id)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(id)initWithView:(id)arg1 ;
-(id)assistantView;
@end

