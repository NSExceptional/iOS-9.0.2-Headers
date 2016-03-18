/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL showInfo; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * contentColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * paddingColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * borderColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * marginColor; 
-(void)setBorderColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)borderColor;
-(void)setContentColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)contentColor;
-(void)setShowInfo:(BOOL)arg1 ;
-(BOOL)showInfo;
-(void)setPaddingColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)paddingColor;
-(void)setMarginColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)marginColor;
@end

