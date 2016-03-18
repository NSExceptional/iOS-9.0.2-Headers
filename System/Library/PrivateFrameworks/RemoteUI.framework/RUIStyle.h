/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface RUIStyle : NSObject {

	UIColor* _backgroundColor;
	UIColor* _radioGroupSelectedColor;
	UIColor* _selectPageDetailTextColor;
	UIColor* _buttonRowTextColor;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * radioGroupSelectedColor;                //@synthesize radioGroupSelectedColor=_radioGroupSelectedColor - In the implementation block
@property (nonatomic,readonly) UIColor * selectPageDetailTextColor;              //@synthesize selectPageDetailTextColor=_selectPageDetailTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * buttonRowTextColor;                     //@synthesize buttonRowTextColor=_buttonRowTextColor - In the implementation block
+(id)defaultStyle;
+(id)frontRowStyle;
+(id)setupAssistantStyle;
+(id)setupAssistantModalStyle;
-(UIColor *)backgroundColor;
-(id)init;
-(void)applyToObjectModel:(id)arg1 ;
-(UIColor *)radioGroupSelectedColor;
-(UIColor *)selectPageDetailTextColor;
-(UIColor *)buttonRowTextColor;
@end

