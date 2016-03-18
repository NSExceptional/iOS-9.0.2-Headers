/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKPlaceViewControllerDelegate <NSObject>
@optional
-(void)placeViewControllerDidSelectRemovePin:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(BOOL)arg3;
-(void)placeViewController:(id)arg1 removeFavoriteForMapItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewController:(id)arg1 didSelectTransitLine:(id)arg2;
-(void)placeViewControllerDidDismiss:(id)arg1;
-(void)placeViewController:(id)arg1 addFavoriteForMapItem:(id)arg2 title:(id)arg3 result:(/*^block*/id)arg4;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1;
-(void)placeViewController:(id)arg1 hasFavoriteForMapItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewController:(id)arg1 didSelectTransitConnectionInformation:(id)arg2;
-(id)activityViewControllerForPlaceViewController:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectReroute:(id)arg2 withDecoderData:(id)arg3 withOrigin:(id)arg4;
-(void)placeViewControllerDidSelectFlyoverTour:(id)arg1;
-(void)placeViewControllerDidSelectShareLocation:(id)arg1;
-(BOOL)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectRerouteFromAddressWithIdentifier:(int)arg2;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
-(void)placeViewController:(id)arg1 didSelectAddressWithIdentifier:(int)arg2;
-(void)placeViewControllerDidSelectDisplayedPhoneNumber:(id)arg1;
-(void)placeViewControllerDidSelectDisplayedHomePage:(id)arg1;
-(void)placeViewControllerDidSelectOnePhoto:(id)arg1;
-(void)placeViewControllerDidSelectOneReview:(id)arg1;
-(void)placeViewControllerDidSelectWriteAReview:(id)arg1;
-(void)placeViewControllerDidSelectMoreInfo:(id)arg1;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2;

@end

