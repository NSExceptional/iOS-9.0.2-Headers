/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKTableViewCell.h>

@class UILabel, NSString;

@interface PKPaymentTransactionTableCell : PKTableViewCell {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _amountLabel;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _amountString;

}

@property (nonatomic,retain) NSString * primaryString;                //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;              //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * amountString;                 //@synthesize amountString=_amountString - In the implementation block
+(double)rowHeight;
-(void)setAmountColor:(id)arg1 ;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(void)setAmountString:(NSString *)arg1 ;
-(NSString *)primaryString;
-(NSString *)secondaryString;
-(NSString *)amountString;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
@end

