/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor;


@protocol TKVibrationPickerStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * vibrationPickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) BOOL vibrationPickerHeaderTextShouldBeUppercase; 
@optional
-(BOOL)vibrationPickerHeaderTextShouldBeUppercase;
-(UIColor *)vibrationPickerCustomTableSeparatorColor;
-(long long)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;

@required
-(BOOL)vibrationPickerUsesOpaqueBackground;
-(long long)vibrationPickerTableViewSeparatorStyle;
-(UIFont *)vibrationPickerCellTextFont;
-(UIColor *)vibrationPickerCellTextColor;
-(UIColor *)vibrationPickerCellHighlightedTextColor;
-(UIColor *)vibrationPickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(BOOL)wantsCustomVibrationPickerHeaderView;
-(UIFont *)vibrationPickerHeaderTextFont;
-(UIColor *)vibrationPickerHeaderTextColor;
-(UIColor *)vibrationPickerHeaderTextShadowColor;
-(UIOffset)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;

@end

