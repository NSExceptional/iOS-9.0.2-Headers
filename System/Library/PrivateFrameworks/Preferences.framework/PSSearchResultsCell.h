/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell {

	BOOL _shouldIndentContent;
	BOOL _shouldIndentSeparator;

}

@property (assign,nonatomic) BOOL shouldIndentContent;                //@synthesize shouldIndentContent=_shouldIndentContent - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentSeparator;              //@synthesize shouldIndentSeparator=_shouldIndentSeparator - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setShouldIndentSeparator:(BOOL)arg1 ;
-(void)setShouldIndentContent:(BOOL)arg1 ;
-(void)_resetIndentation;
-(BOOL)shouldIndentContent;
-(BOOL)shouldIndentSeparator;
@end

