/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {

	unsigned _type;
	id _constantValue;

}
-(id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)propertyAtEndOfKeyPathExpression:(id)arg1 ;
-(unsigned)sqlTypeForProperty:(id)arg1 ;
-(BOOL)_addBindVarForConstId:(id)arg1 ofType:(unsigned)arg2 inContext:(id)arg3 ;
-(BOOL)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2 ;
-(id)initWithConstantValue:(id)arg1 ofType:(unsigned)arg2 inScope:(id)arg3 context:(id)arg4 ;
-(void)dealloc;
@end

