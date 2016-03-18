/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKPlaceViewNearbyAppsCellDelegate.h>

@protocol MKPlaceNearbyAppsViewControllerDelegate;
@class NSArray, NSString;

@interface MKPlaceNearbyAppsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKPlaceViewNearbyAppsCellDelegate> {

	id<MKPlaceNearbyAppsViewControllerDelegate> _nearbyAppsDelegate;
	NSArray* _storeItems;

}

@property (assign,nonatomic,__weak) id<MKPlaceNearbyAppsViewControllerDelegate> nearbyAppsDelegate;              //@synthesize nearbyAppsDelegate=_nearbyAppsDelegate - In the implementation block
@property (nonatomic,retain) NSArray * storeItems;                                                               //@synthesize storeItems=_storeItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(void)contentSizeDidChange;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(void)setStoreItems:(NSArray *)arg1 ;
-(NSArray *)storeItems;
-(void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3 ;
-(void)setNearbyAppsDelegate:(id<MKPlaceNearbyAppsViewControllerDelegate>)arg1 ;
-(id<MKPlaceNearbyAppsViewControllerDelegate>)nearbyAppsDelegate;
-(void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

