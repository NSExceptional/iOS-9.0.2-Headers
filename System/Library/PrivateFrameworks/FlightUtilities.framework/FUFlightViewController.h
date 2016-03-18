/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSMapTable, NSDate, FUFlight, FUFlightView, NSNumber, NSString;

@interface FUFlightViewController : UIViewController <MKMapViewDelegate> {

	NSMapTable* _disabledConstraints;
	BOOL _loadingFlight;
	NSDate* _startLoadingDate;
	BOOL _highlightCurrentFlightLeg;
	FUFlight* _flight;
	FUFlightView* _flightView;
	NSNumber* _flightCode;
	NSString* _airlineCode;

}

@property (nonatomic,retain) FUFlight * flight;                           //@synthesize flight=_flight - In the implementation block
@property (assign,nonatomic) BOOL highlightCurrentFlightLeg;              //@synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg - In the implementation block
@property (__weak) FUFlightView * flightView;                             //@synthesize flightView=_flightView - In the implementation block
@property (retain) NSNumber * flightCode;                                 //@synthesize flightCode=_flightCode - In the implementation block
@property (retain) NSString * airlineCode;                                //@synthesize airlineCode=_airlineCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)commonInit;
-(void)showLoadingView;
-(void)showErrorView;
-(id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2 ;
-(NSNumber *)flightCode;
-(void)setFlight:(FUFlight *)arg1 ;
-(void)setFlightCode:(NSNumber *)arg1 ;
-(void)setAirlineCode:(NSString *)arg1 ;
-(void)setHighlightCurrentFlightLeg:(BOOL)arg1 ;
-(NSString *)airlineCode;
-(FUFlightView *)flightView;
-(FUFlight *)flight;
-(void)updateAirlineInformation;
-(void)updateLocationInfo;
-(void)updateFlightTerminalInfo;
-(void)updateFlightStatus;
-(void)updateFlightDates;
-(void)updateDelayInfo;
-(void)showFlightView;
-(BOOL)highlightCurrentFlightLeg;
-(void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3 ;
-(void)showView:(id)arg1 ;
-(void)addFittingView:(id)arg1 ;
-(void)fadeLayer:(id)arg1 visible:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)departingLate;
-(long long)delayInMinutesForFlightStep:(id)arg1 ;
-(BOOL)arrivingLate;
-(id)displayStringForDate:(id)arg1 locale:(id)arg2 late:(BOOL)arg3 timeZone:(id)arg4 ;
-(BOOL)departingEarly;
-(BOOL)arrivingEarly;
-(id)initWithFlight:(id)arg1 ;
-(void)hideView:(id)arg1 ;
-(void)setFlightView:(FUFlightView *)arg1 ;
-(void)viewWillAppear;
-(void)viewDidDisappear;
@end

