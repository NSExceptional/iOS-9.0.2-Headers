/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSMutableArray, NSString;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource> {

	UITableView* _tableView;
	NSMutableArray* _tableSections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(void)appendInfoFromCertView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 certificateProperties:(id)arg2 ;
-(id)_titleForIndexPath:(id)arg1 ;
-(id)_detailForIndexPath:(id)arg1 ;
@end

