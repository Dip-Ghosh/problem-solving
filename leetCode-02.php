Route::get('train-occupancy-report',array('as' => 'Train Occupancy Report','uses' => 'AdminReportController@getTrainOccupancyReport'));
            Route::get('get-all-cities',array('as' => 'Get All Cities By Bus Make ID', 'uses' => 'AdminBusController@getAllCitiesFromBusMakeID'));
