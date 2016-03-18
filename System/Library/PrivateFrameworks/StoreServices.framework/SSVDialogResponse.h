/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding> {

	long long _selectedButtonIndex;
	NSArray* _textFieldValues;

}

@property (assign,nonatomic) long long selectedButtonIndex;              //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (nonatomic,copy) NSArray * textFieldValues;                    //@synthesize textFieldValues=_textFieldValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)selectedButtonIndex;
-(void)setSelectedButtonIndex:(long long)arg1 ;
-(void)setTextFieldValues:(NSArray *)arg1 ;
-(NSArray *)textFieldValues;
@end

