/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MCDetailsHeaderContentView;

@interface MCDetailsHeaderCell : UITableViewCell {

	MCDetailsHeaderContentView* _headerView;

}
-(void)setOrganizationName:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mode:(int)arg3 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)hideActionButton;
-(double)heightForTableView;
-(void)showActionButton;
-(void)setActionToRemove;
-(void)setIsExpired:(BOOL)arg1 ;
-(void)setActionToInstall;
-(void)setDisplayName:(id)arg1 ;
-(void)setGradientColor:(int)arg1 ;
@end

