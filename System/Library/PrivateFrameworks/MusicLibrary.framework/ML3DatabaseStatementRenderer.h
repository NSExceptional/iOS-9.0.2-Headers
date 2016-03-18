/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ML3DatabaseStatementRenderer : NSObject
+(id)defaultRenderer;
-(id)rollbackTranscationStatementToSavepointName:(id)arg1 ;
-(id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1 ;
-(id)commitTransactionStatement;
-(id)rollbackTranscationStatement;
-(id)savepointStatementWithName:(id)arg1 ;
-(id)savepointReleaseStatementWithName:(id)arg1 ;
-(id)insertStatementWithOptions:(id)arg1 ;
-(id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)insertStatementUsingDefaultValuesForTableName:(id)arg1 ;
-(id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2 ;
@end

