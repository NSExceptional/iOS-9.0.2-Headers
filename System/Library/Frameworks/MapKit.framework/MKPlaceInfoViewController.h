/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AddressBookUI/ABContactViewController.h>
#import <libobjc.A.dylib/ABContactViewControllerDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKHideableBottomSeparator.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellProvider.h>

@protocol MKPlaceInfoViewControllerDelegate, MKMapItemVendorDeal;
@class ABCardGroup, _MKPlaceViewController, MKMapItem, NSArray, UIImage, _MKPlaceInfoViewControllerRouter, NSMutableDictionary, NSAttributedString, NSString;

@interface MKPlaceInfoViewController : ABContactViewController <ABContactViewControllerDelegate, MKStackingViewControllerPreferredSizeUse, MKHideableBottomSeparator, MKPlaceAttributionCellProvider> {

	ABCardGroup* _directionsGroup;
	ABCardGroup* _dealsGroup;
	ABCardGroup* _businessInfoGroup;
	ABCardGroup* _inlineMapGroup;
	ABCardGroup* _flyoverGroup;
	double _businessInfoSizedForWidth;
	BOOL _showAttribution;
	BOOL _viewShouldHideBottommostSeparator;
	BOOL _shouldHideContactInfo;
	_MKPlaceViewController* _owner;
	id<MKPlaceInfoViewControllerDelegate> _infoDelegate;
	MKMapItem* _mapItem;
	NSArray* _businessInfoOrder;
	UIImage* _inlineMap;
	id<MKMapItemVendorDeal> _deal;
	_MKPlaceInfoViewControllerRouter* _actionsProxy;
	NSMutableDictionary* _removedContactsFields;

}

@property (assign,nonatomic,__weak) id<MKPlaceInfoViewControllerDelegate> infoDelegate;              //@synthesize infoDelegate=_infoDelegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) id<MKMapItemVendorDeal> deal;                                           //@synthesize deal=_deal - In the implementation block
@property (nonatomic,readonly) NSAttributedString * infoAttributionString; 
@property (assign,nonatomic) BOOL shouldHideContactInfo;                                             //@synthesize shouldHideContactInfo=_shouldHideContactInfo - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSArray * businessInfoOrder;                                            //@synthesize businessInfoOrder=_businessInfoOrder - In the implementation block
@property (nonatomic,retain) UIImage * inlineMap;                                                    //@synthesize inlineMap=_inlineMap - In the implementation block
@property (nonatomic,retain) _MKPlaceInfoViewControllerRouter * actionsProxy;                        //@synthesize actionsProxy=_actionsProxy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * removedContactsFields;                            //@synthesize removedContactsFields=_removedContactsFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
@property (assign,nonatomic) BOOL viewShouldHideBottommostSeparator;                                 //@synthesize viewShouldHideBottommostSeparator=_viewShouldHideBottommostSeparator - In the implementation block
@property (assign,nonatomic) BOOL showAttribution;                                                   //@synthesize showAttribution=_showAttribution - In the implementation block
-(void)setContact:(id)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(BOOL)viewShouldHideBottommostSeparator;
-(void)setViewShouldHideBottommostSeparator:(BOOL)arg1 ;
-(void)_updateBusinessInfoForWidth:(double)arg1 withTraits:(id)arg2 forceReload:(BOOL)arg3 ;
-(UIImage *)inlineMap;
-(void)setShowAttribution:(BOOL)arg1 ;
-(void)restoreFieldsForContact:(id)arg1 withInfo:(id)arg2 ;
-(void)_handleBusinessAttributionRequest;
-(void)updateInlineMapWithRefinedMapItem:(id)arg1 ;
-(id)configuredContactForContact:(id)arg1 shouldHideAddress:(BOOL)arg2 ;
-(void)setRemovedInfo:(id)arg1 forContact:(id)arg2 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)willShowBusinessInfo;
-(void)configureContactForShouldHideAddress:(BOOL)arg1 ;
-(BOOL)shouldHideContactInfo;
-(void)_rerouteFromAddress:(id)arg1 ;
-(void)_setupBusinessInfo;
-(void)setActionsProxy:(_MKPlaceInfoViewControllerRouter *)arg1 ;
-(void)_showDeal;
-(long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2 ;
-(_MKPlaceInfoViewControllerRouter *)actionsProxy;
-(void)_directionsToAddress:(unsigned long long)arg1 ;
-(id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3 ;
-(id<MKPlaceInfoViewControllerDelegate>)infoDelegate;
-(void)_setupActions;
-(void)resetContactGroups;
-(void)moveInfoForContact:(id)arg1 intoInfo:(id)arg2 ;
-(NSMutableDictionary *)removedContactsFields;
-(void)setInfoDelegate:(id<MKPlaceInfoViewControllerDelegate>)arg1 ;
-(BOOL)contactHasRemovableInfo:(id)arg1 ;
-(void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3 ;
-(id<MKMapItemVendorDeal>)deal;
-(BOOL)showAttribution;
-(NSArray *)businessInfoOrder;
-(void)_launchMaps;
-(void)_updateBusinessInfoForWidth:(double)arg1 withTraits:(id)arg2 ;
-(void)setRemovedContactsFields:(NSMutableDictionary *)arg1 ;
-(void)setBusinessInfoOrder:(NSArray *)arg1 ;
-(void)setShouldHideContactInfo:(BOOL)arg1 ;
-(BOOL)removedInfoExistsForContact:(id)arg1 ;
-(void)setDeal:(id<MKMapItemVendorDeal>)arg1 ;
-(void)setInlineMap:(UIImage *)arg1 ;
-(id)removedInfoForContact:(id)arg1 ;
-(void)_flyoverTour:(id)arg1 ;
-(NSAttributedString *)infoAttributionString;
-(id)contactHeaderView;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
@end

