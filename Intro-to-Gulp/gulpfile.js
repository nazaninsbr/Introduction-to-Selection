var gulp = require('gulp');
var sass = require('gulp-sass');


gulp.task('print-in-command-line', function(){
	console.log('writing in the command line');
});

gulp.task('scss-to-css', function(){
	return gulp.src('./style.scss')
		.pipe(sass())
		.pipe(gulp.dest('.'));	
});
